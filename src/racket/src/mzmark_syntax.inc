/* >>>> Generated by mkmark.rkt from mzmarksrc.c <<<< */

static int mark_rename_table_SIZE(void *p, struct NewGC *gc) {
  return
  gcBYTES_TO_WORDS(sizeof(Module_Renames));
}

static int mark_rename_table_MARK(void *p, struct NewGC *gc) {
  Module_Renames *rn = (Module_Renames *)p;
  gcMARK2(rn->phase, gc);
  gcMARK2(rn->ht, gc);
  gcMARK2(rn->nomarshal_ht, gc);
  gcMARK2(rn->unmarshal_info, gc);
  gcMARK2(rn->shared_pes, gc);
  gcMARK2(rn->set_identity, gc);
  gcMARK2(rn->marked_names, gc);
  gcMARK2(rn->free_id_renames, gc);
  gcMARK2(rn->insp, gc);
  return
  gcBYTES_TO_WORDS(sizeof(Module_Renames));
}

static int mark_rename_table_FIXUP(void *p, struct NewGC *gc) {
  Module_Renames *rn = (Module_Renames *)p;
  gcFIXUP2(rn->phase, gc);
  gcFIXUP2(rn->ht, gc);
  gcFIXUP2(rn->nomarshal_ht, gc);
  gcFIXUP2(rn->unmarshal_info, gc);
  gcFIXUP2(rn->shared_pes, gc);
  gcFIXUP2(rn->set_identity, gc);
  gcFIXUP2(rn->marked_names, gc);
  gcFIXUP2(rn->free_id_renames, gc);
  gcFIXUP2(rn->insp, gc);
  return
  gcBYTES_TO_WORDS(sizeof(Module_Renames));
}

#define mark_rename_table_IS_ATOMIC 0
#define mark_rename_table_IS_CONST_SIZE 1


static int mark_rename_table_set_SIZE(void *p, struct NewGC *gc) {
  return
  gcBYTES_TO_WORDS(sizeof(Module_Renames_Set));
}

static int mark_rename_table_set_MARK(void *p, struct NewGC *gc) {
  Module_Renames_Set *rns = (Module_Renames_Set *)p;
  gcMARK2(rns->et, gc);
  gcMARK2(rns->rt, gc);
  gcMARK2(rns->other_phases, gc);
  gcMARK2(rns->share_marked_names, gc);
  gcMARK2(rns->set_identity, gc);
  gcMARK2(rns->insp, gc);
  return
  gcBYTES_TO_WORDS(sizeof(Module_Renames_Set));
}

static int mark_rename_table_set_FIXUP(void *p, struct NewGC *gc) {
  Module_Renames_Set *rns = (Module_Renames_Set *)p;
  gcFIXUP2(rns->et, gc);
  gcFIXUP2(rns->rt, gc);
  gcFIXUP2(rns->other_phases, gc);
  gcFIXUP2(rns->share_marked_names, gc);
  gcFIXUP2(rns->set_identity, gc);
  gcFIXUP2(rns->insp, gc);
  return
  gcBYTES_TO_WORDS(sizeof(Module_Renames_Set));
}

#define mark_rename_table_set_IS_ATOMIC 0
#define mark_rename_table_set_IS_CONST_SIZE 1


static int mark_srcloc_SIZE(void *p, struct NewGC *gc) {
  return
  gcBYTES_TO_WORDS(sizeof(Scheme_Stx_Srcloc));
}

static int mark_srcloc_MARK(void *p, struct NewGC *gc) {
  Scheme_Stx_Srcloc *s = (Scheme_Stx_Srcloc *)p;
  gcMARK2(s->src, gc);
  return
  gcBYTES_TO_WORDS(sizeof(Scheme_Stx_Srcloc));
}

static int mark_srcloc_FIXUP(void *p, struct NewGC *gc) {
  Scheme_Stx_Srcloc *s = (Scheme_Stx_Srcloc *)p;
  gcFIXUP2(s->src, gc);
  return
  gcBYTES_TO_WORDS(sizeof(Scheme_Stx_Srcloc));
}

#define mark_srcloc_IS_ATOMIC 0
#define mark_srcloc_IS_CONST_SIZE 1


static int mark_wrapchunk_SIZE(void *p, struct NewGC *gc) {
  Wrap_Chunk *wc = (Wrap_Chunk *)p;
  return
  gcBYTES_TO_WORDS(sizeof(Wrap_Chunk) + ((wc->len - 1) * sizeof(Scheme_Object *)));
}

static int mark_wrapchunk_MARK(void *p, struct NewGC *gc) {
  Wrap_Chunk *wc = (Wrap_Chunk *)p;
  int i;
  for (i = wc->len; i--; ) {
    gcMARK2(wc->a[i], gc);
  }
  return
  gcBYTES_TO_WORDS(sizeof(Wrap_Chunk) + ((wc->len - 1) * sizeof(Scheme_Object *)));
}

static int mark_wrapchunk_FIXUP(void *p, struct NewGC *gc) {
  Wrap_Chunk *wc = (Wrap_Chunk *)p;
  int i;
  for (i = wc->len; i--; ) {
    gcFIXUP2(wc->a[i], gc);
  }
  return
  gcBYTES_TO_WORDS(sizeof(Wrap_Chunk) + ((wc->len - 1) * sizeof(Scheme_Object *)));
}

#define mark_wrapchunk_IS_ATOMIC 0
#define mark_wrapchunk_IS_CONST_SIZE 0


static int lex_rib_SIZE(void *p, struct NewGC *gc) {
  return
  gcBYTES_TO_WORDS(sizeof(Scheme_Lexical_Rib));
}

static int lex_rib_MARK(void *p, struct NewGC *gc) {
  Scheme_Lexical_Rib *rib = (Scheme_Lexical_Rib *)p;
  gcMARK2(rib->rename, gc);
  gcMARK2(rib->timestamp, gc);
  gcMARK2(rib->sealed, gc);
  gcMARK2(rib->mapped_names, gc);
  gcMARK2(rib->next, gc);
  return
  gcBYTES_TO_WORDS(sizeof(Scheme_Lexical_Rib));
}

static int lex_rib_FIXUP(void *p, struct NewGC *gc) {
  Scheme_Lexical_Rib *rib = (Scheme_Lexical_Rib *)p;
  gcFIXUP2(rib->rename, gc);
  gcFIXUP2(rib->timestamp, gc);
  gcFIXUP2(rib->sealed, gc);
  gcFIXUP2(rib->mapped_names, gc);
  gcFIXUP2(rib->next, gc);
  return
  gcBYTES_TO_WORDS(sizeof(Scheme_Lexical_Rib));
}

#define lex_rib_IS_ATOMIC 0
#define lex_rib_IS_CONST_SIZE 1


static int mark_free_id_info_SIZE(void *p, struct NewGC *gc) {
  return
  gcBYTES_TO_WORDS((sizeof(Scheme_Vector) 
		    + ((8 - 1) * sizeof(Scheme_Object *))));
}

static int mark_free_id_info_MARK(void *p, struct NewGC *gc) {
  Scheme_Vector *vec = (Scheme_Vector *)p;
  int i;
  for (i = 8; i--; )
    gcMARK2(vec->els[i], gc);

  return
  gcBYTES_TO_WORDS((sizeof(Scheme_Vector) 
		    + ((8 - 1) * sizeof(Scheme_Object *))));
}

static int mark_free_id_info_FIXUP(void *p, struct NewGC *gc) {
  Scheme_Vector *vec = (Scheme_Vector *)p;
  int i;
  for (i = 8; i--; )
    gcFIXUP2(vec->els[i], gc);

  return
  gcBYTES_TO_WORDS((sizeof(Scheme_Vector) 
		    + ((8 - 1) * sizeof(Scheme_Object *))));
}

#define mark_free_id_info_IS_ATOMIC 0
#define mark_free_id_info_IS_CONST_SIZE 0



