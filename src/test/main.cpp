/**
 * @file main_test.cpp
 *
 *
 * libnlp is free software; you may redistribute it and/or modify it under the
 * terms of the 3-clause BSD license.  You should have received a copy of the
 * 3-clause BSD license along with mlpack.  If not, see
 * http://www.opensource.org/licenses/BSD-3-Clause for more information.
 */
#include <libnlp.hpp>


using namespace libnlp;


//BOOST_AUTO_TEST_SUITE()

BOOST_AUTO_TEST_CASE(CaseOneTest)
{

   /* Get data for training and testing */
   //RawDocument doc = new RawDocument();
   libnlp::Corpus<TagedDocument> corpus = libnlp::CorpusLoader.load(url);
   libnlp::RawDocument[] docs = corpus.getDocuments();
   Label[] labels = corpus.getLabels();

   /* Configure the feature extraction methods */
   libnlp::FeatureExtractorFactory factory = new libnlp::FeatureExtractorFactory();
   factory.add(new libnlp::BOW());
   libnlp::extraction::FeatureExtractor fe = factory.build();

   /* Train the feature extractor and the classifier */  
   fe.fit(docs);
   libnlp::NaiveBayesClassifier classifier = new libnlp::NaiveBayesClassifier(docs, labels, fe);

   /* Test the classifier */ 
   Label pred = classifier.predict(doc);
   

}

