function(CONVERT_PASCALCASE_TO_UPPERCASE_WITH_UNDERSCORES INPUT_VAR OUTPUT_VAR)
    # replace PascalCase with Pascal_Case (insert `_` between lowercase and uppercase)
    string(REGEX REPLACE "([a-z])([A-Z])" "\\1_\\2" VAR_WITH_UNDERSCORE ${INPUT_VAR})

    # convert Pascal_Case to PASCAL_CASE
    string(TOUPPER ${VAR_WITH_UNDERSCORE} VAR_UPPERCASE_WITH_UNDERSCORE)

    # return to OUTPUT_VAR variable
    set(${OUTPUT_VAR} ${VAR_UPPERCASE_WITH_UNDERSCORE} PARENT_SCOPE)
endfunction()
