class Badge {
    public String print(Integer id, String name, String department) {
        String owner = "OWNER";
        // Print a badge for an employee
        if (id != null && department != null) {
            String upper_case_department = department.toUpperCase();
            String result = String.format("[%s] - %s - %s", id, name, upper_case_department);
            return result;
        } 

        // Print a badge for a new employee 
        else if (id == null && department != null){
            String upper_case_department = department.toUpperCase();
            String result = String.format("%s - %s", name, upper_case_department);
            return result;
        }
        else { 
             // owner is a new employee
             if(id == null && department == null ){
                String result = String.format("%s - %s", name, owner);
                return result;
            }
            // owner is not a new employee and has an ID 
            else if (id != null && department == null)
            {
                String result = String.format("[%s] - %s - %s", id, name, owner);
                return result;

            }
                return "nothing";
        
            }
           
        
}
}