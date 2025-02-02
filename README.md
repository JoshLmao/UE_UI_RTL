# UE-UI-RTL

Investigating RTL supporting in UE and how to easily support it in UI

Good references:

- **Localization in Unreal Engine (UE4)** by Chris
  McCole - [Link](https://www.chrismccole.com/blog/localization-in-unreal-engine-ue4)

# Localization Dashboard

Everything is localized using the basic Unreal way.

To add a new key and string to be localized:

- Navigate to an FText and press the flag beside it.
- Set the category as "UMG" and set an appropriate localize key.

To update localization:

- Navigate to the dashboard (Tools > Localization Dashboard).
- Press the UMG category.
- Press "Gather Texts"
- Once complete, go through each locale and Edit Translations for that culture

Compile Locale:

- Update the localization by pressing "Count Words"
- Once done, press "Compile Texts"
- All done!