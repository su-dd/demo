package File;

import java.io.*;
import java.net.URLDecoder;

public class FileLoad {

    public String getResourcesFileContent(String path) {
        String filePath = getResourcesPath(path);
        return readFileContent(filePath);
    }

    public String getResourcesPath(String path) {
        String resourcesPath = this.getClass().getClassLoader().getResource(path).getPath();
        String filePath = null;
        try {
            filePath = URLDecoder.decode(resourcesPath, "UTF-8");
        } catch (UnsupportedEncodingException e) {
            e.printStackTrace();
        }
        return filePath;
    }

    public InputStream getResourceAsStream(String path) {
        return this.getClass().getClassLoader().getResourceAsStream(path);
    }

    public String readFileContent(String fileName) {
        File file = new File(fileName);
        BufferedReader reader = null;
        StringBuffer sbf = new StringBuffer();
        try {
            reader = new BufferedReader(new FileReader(file));
            String tempStr;
            while ((tempStr = reader.readLine()) != null) {
                sbf.append(tempStr);
            }
            reader.close();
            return sbf.toString();
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            if (reader != null) {
                try {
                    reader.close();
                } catch (IOException e1) {
                    e1.printStackTrace();
                }
            }
        }
        return sbf.toString();
    }
}
