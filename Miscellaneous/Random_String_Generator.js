getToken = (tokenLength) => {
        let length = tokenLength;
        length = typeof (tokenLength) === 'number' && tokenLength > 0 ? length : false;
        if (length) {
                let generatedToken = '';
                const possibleCharacter = 'abcdefghijklmnopqrstwxyz0123456789';
                for (let i = 0; i < length; i++) {
                        const randomCharacter = possibleCharacter.charAt(Math.round(Math.random() * possibleCharacter.length));
                        generatedToken += randomCharacter;
                }
                return generatedToken;
        } else {
                return false;
        }
}

console.log(getToken(16));
