import java.io.FileOutputStream;
import java.io.IOException;

public class GravarTextoArquivo {
    public static void main(String[] args) {
        try {
            FileOutputStream caminho = new FileOutputStream(
                    "C:\\Documentos\\CODIGOS\\Teste.txt");

            String conteudo = "DASDASDASDSADDA";
            byte[] bytes = conteudo.getBytes();

            caminho.write(bytes);
            caminho.close();

            System.out.println("Conteúdo gravado com sucesso.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
