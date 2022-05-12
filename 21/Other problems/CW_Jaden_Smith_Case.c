char *to_jaden_case(char *jaden_case, const char *string);

int main()
{
    char phrase[] = "v'imekdpj fls mzqdhw. yry'bdumk xpavznvss d'aqxt Jeo'q Lbiivdmj Feuyvy vkenvx. zuioffr. xysouyl. axxadzw iauf";
    char jaden_case[] = "\0";

    to_jaden_case(jaden_case, phrase);

    return 0;
}

char *to_jaden_case (char *jaden_case, const char *string)
{
    int i = 0;
    if (string[i] > 90)
      jaden_case[0] = string[0] - 32;
    else
      jaden_case[0] = string[0];
    if (string[i])  
    {
      for (i = 1; string[i]; i++)
        {
            if (string[i - 1] == 32 && string[i] > 90)
                jaden_case[i] = string[i] - 32;
            else
                jaden_case[i] = string[i];
        }
    }
  jaden_case[i] = '\0';  
  return jaden_case;
}