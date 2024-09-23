# This PowerShell script filters valid phone numbers from a text file.
# Usage: ./valid_phone_numbers.ps1 <file.txt>

param (
    [string]$filePath
)

# Read all lines from the file
$lines = Get-Content -Path $filePath

# Define the regex patterns for valid phone numbers
$validPattern1 = '^\(\d{3}\) \d{3}-\d{4}$'  # Format: (xxx) xxx-xxxx
$validPattern2 = '^\d{3}-\d{3}-\d{4}$'      # Format: xxx-xxx-xxxx

# Filter and display valid phone numbers
foreach ($line in $lines) {
    if ($line -match $validPattern1 -or $line -match $validPattern2) {
        Write-Output $line
    }
}
