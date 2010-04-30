#lang deinprogramm/DMdA

(require syntax/docprovide)
(provide #%app #%top (rename-out (DMdA-module-begin #%module-begin)) #%datum #%top-interaction require lib planet
         define let let* letrec lambda cond if else begin and or
         define-record-procedures define-record-procedures-parametric
         .. ... .... ..... ......
	 check-expect check-within check-error check-member-of check-range
	 check-property for-all ==> expect expect-within expect-member-of expect-range
	 contract : define-contract -> mixed one-of predicate combined
	 number real rational integer natural boolean true false string empty-list property
	 chocolate-cookie)
(provide cons list)
(provide-and-document
 procedures
 (all-from-except beginner: deinprogramm/DMdA procedures
		  set! define-record-procedures-2 eq? equal?
		  quote
		  make-pair pair? first rest
		  length map for-each reverse append list list-ref fold
		  symbol? string->symbol symbol->string
		  apply))