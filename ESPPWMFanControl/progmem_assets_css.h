
#ifndef _PROGMEM_ASSETS_CSS_H_
#define _PROGMEM_ASSETS_CSS_H_

namespace progmem_assets_css {
    
    static const char main[] PROGMEM = R"==(
        * {
            --var-primary-color: white;
            --var-secondary-color: tomato;
            --var-primary-background-color: #444;
            --var-secondary-background-color: #333;
            --var-tertiary-background-color: #555;
        }
        
        html {
            font-family: Helvetica;
            display: inline-block;
            margin: 0px auto;
            text-align: center;
            line-height: 20px;
            background-color: var(--var-primary-background-color);
            color: var(--var-secondary-color) /*#eee*/;
        }
        
        div.container {
            position: absolute;
            top: 0px;
            left: 0px;
            width: 100%;
            height: 100%;
        }
        
        div.top {
            height: 60px;
            line-height: 60px;
            border-bottom: 1px dashed var(--var-primary-color);
            box-sizing: border-box;
        }
        
        div.top h1 {
            margin: 0;
        }
        
        div.top h1 a {
            color: var(--var-primary-color);
            text-decoration: none;
        }
        
        div.top h1 a:hover {
            text-decoration: underline;
        }
        
        div.content {
            text-align: center;
            width: 100%;
            max-width: 600px;
            padding: 20px 0px;
        }
        
        div.menu {
            text-align: center;
            width: 100%;
            max-width: 600px;
            min-width: 300px;
        }
        
        div.values {
            font-size: 120%;
            font-weight: bold;
            line-height: 130%;
        }
        
        div.wrapper {
            background-color: var(--var-secondary-background-color);
            margin: 0px auto;
            max-width: 600px;
            height: calc(100vh - 60px);
        }
        
        div.messageWindow {
            position: absolute;
            width: 300px;
            height: 50px;
            top: 5px;
            left: calc(50% - 150px);
            padding: 10px;
            font-size: 16px;
            line-height: 30px;
            /*background-color: #666;
            border: 1px solid black;*/
            box-sizing: border-box;
            opacity: 0;
            text-align: center;
            font-weight: bold;
            border-radius: 3px;
            /*color: var(--var-primary-color);*/
            transition: opacity 1s;

            background-color: var(--var-secondary-background-color);
            border: 1px solid var(--var-secondary-color);
        }

        div.temporaryMessage {
            background: var(--var-secondary-background-color);
            border: 1px solid var(--var-secondary-color);
            border-radius: 3px;
            left: 3%;
            max-width: 300px;
            padding: 10px;
            position: absolute;
            top: 80px;
        }
        
        ul.nav li.heading {
            background-color: var(--var-primary-background-color);
            border: 0px;
            /*border-top: 1px solid #666;
            border-bottom: 1px solid #666;*/
            color: var(--var-primary-color);
            font-weight: bold;
            font-size: 120%;
            padding: 12px 16px;
            text-transform: uppercase;
        }
        ul.nav li.heading a:hover {
            text-decoration: underline;
        }
        
        ul.nav {
            list-style-type: none;
            margin: 0;
            padding: 0;
            width: 100%;
            box-sizing: border-box;
            background-color: var(--var-secondary-background-color);
            color: var(--var-secondary-color);
            border: 0px solid var(--var-secondary-background-color);
            border-radius: 4px;
        }
        
        ul.nav li {
            font-size: 14px;
            line-height: 17px;
            padding: 8px 16px;
        }
        
        ul.nav li a {
            text-decoration: none;
            color: var(--var-secondary-color);
        }
        
        ul.nav li:hover {
            background-color: var(--var-primary-background-color);
        }
        
        ul.nav li:hover a {
            color: var(--var-secondary-color);
        }
        
        ul.nav input {
            text-align: center;
        }
        
        
        input {
            background: inherit;
            border: 1px solid var(--var-tertiary-background-color);
            color: inherit;
            font: inherit;
            line-height: inherit;
            margin-left
        }
        
        input.link {
            cursor: pointer;
        }
        
        .bold {
            font-weight: bold;
        }
        
        .fade {
            opacity: 1;
            transition: opacity 0.1s;
        }
        
        .fade-out {
            opacity: 0.7;
        }

        .padding-10 {
            padding: 10px;
        }

        .color-secondary {
            color: var(--var-secondary-color);
        }
        
    )==";
    
}

#endif
