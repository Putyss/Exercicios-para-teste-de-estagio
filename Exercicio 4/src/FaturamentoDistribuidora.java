public class FaturamentoDistribuidora {
    public static void main(String[] args) {

        // Definindo o valor do faturamento mensal por estado.
        double faturamentoSP = 67836.43;
        double faturamentoRJ = 36678.66;
        double faturamentoMG = 29229.88;
        double faturamentoES = 27165.48;
        double faturamentoOutros = 19849.53;

        // Calculando o valor total do faturamento mensal.
        double total = faturamentoSP + faturamentoRJ + faturamentoMG + faturamentoES + faturamentoOutros;

        // Calculando o percentual de representação de cada estado.
        double percentualSP = (faturamentoSP / total) * 100;
        double percentualRJ = (faturamentoRJ / total) * 100;
        double percemtualMG = (faturamentoMG / total) * 100;
        double percentualES = (faturamentoES / total) * 100;
        double percentualOutros = (faturamentoOutros / total) * 100;

        System.out.printf("""
                Porcentual de representação de cada estado é:
                SP: %.2f%%.
                RJ: %.2f%%.
                MG: %.2f%%.
                ES: %.2f%%.
                Outros: %.2f%%

                """, percentualSP, percentualRJ, percemtualMG, percentualES, percentualOutros);

    }
}

