// If first
            if(counter == 0)
            {
                // Create new JPEG
                sprintf(filename, "%03i.jpg", counter);
                img = fopen(filename, "w");
                fwrite(buffer, sizeof(BYTE), bytesRead, img);
                counter++;
            }

            else
            {
                // close file and open a new JPEG
                fclose(img);
                sprintf(filename, "%03i.jpg", counter);
                img = fopen(filename, "w");
                fwrite(buffer, sizeof(BYTE), bytesRead, img);
                counter++;
            }
        }

            else if( counter != 0)
            {
                fwrite(buffer, sizeof(BYTE), bytesRead, img);
                if(bytesRead == 0)
                {
                    fclose(img);
                    fclose(f);
                    return 0;
                }