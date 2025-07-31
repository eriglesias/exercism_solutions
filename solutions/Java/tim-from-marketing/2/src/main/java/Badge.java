class Badge {
   private static final String OWNER = "OWNER";
   private static final String SEPARATOR = " - ";
   public String print(Integer id, String name, String department) {
       return new StringBuilder()
           .append(parseId(id))
           .append(parseName(name))
           .append(SEPARATOR)
           .append(parseDepartment(department))
           .toString().trim();
   }
   private String parseId(Integer id) {
        return id != null ? String.format("[%d]%s", id, SEPARATOR) : "";
    }

    private String parseName(String name) {
        return name;
    }

    private String parseDepartment(String department) {
        if (department != null) {
            return department.toUpperCase();
        }
        return OWNER;
    }
}

    