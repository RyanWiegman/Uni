from flask import render_template, url_for
from website import app

@app.route("/")
@app.route("/home")
def home():
    return render_template('home.html', title = 'Home')

# @app.route("/about")
# def about() :
#     return render_template('about.html', title='About')

@app.route("/Initial_Block_Document")
def Initial_Block_Document() :
    return render_template("initial_and_block.html", title="Initial and Block Document")

@app.route("/senior_design")
def senior_design() :
    return render_template('senior_design.html', title="Senior Design")

@app.route('/CDR')
def CDR() :
    return render_template("cdr.html", title="Critial Design Review")

@app.route('/conference_paper')
def conference_paper() :
    return render_template('conference_paper.html', title="Conference Paper")

@app.route('/final_presentation')
def final_presentation() :
    return render_template("final_presentation.html", title="Final Presentation")

@app.route('/final_documentation')
def final_documentation() :
    return render_template("final_documenation.html", title='Final Documentation')

@app.route('/cdr_video')
def cdr_video() :
    return render_template('cdr_video.html', title= 'CDR Video')

@app.route('/midterm_demo_video')
def midterm_demo_video() :
    return render_template('midterm_demo_video.html', title='Midterm Demo Video')