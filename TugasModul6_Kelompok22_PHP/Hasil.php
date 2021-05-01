<html>
    <table>
      <tr>
        <td>Nama Mahasiswa </td> 
        <td>: <?php echo $nama = $_POST['nama']; ?></td> 
      </tr>
      <tr>
        <td>NIM</td> 
        <td>: <?php echo $nim = $_POST['nim']; ?></td> 
      </tr>
      <tr>
        <td>Jurusan</td> 
        <td>: <?php echo $nim = $_POST['jurusan']; ?></td> 
      </tr>
<?php
    $rad = (float) $_POST['radius']; 
    $luas = pow($rad, 2) * pi();
echo '<p>Luas Lingkaran: '.$luas.' m<sup>2</sup></p>';
?>