import pathlib

file = input("Enter a file name: ")

file_extension = pathlib.Path(file).suffix
print("File type: ", file_extension)