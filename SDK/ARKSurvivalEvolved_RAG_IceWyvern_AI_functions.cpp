// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RAG_IceWyvern_AI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RAG_IceWyvern_AI.RAG_IceWyvern_AI_C.UserConstructionScript
// ()

void ARAG_IceWyvern_AI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RAG_IceWyvern_AI.RAG_IceWyvern_AI_C.UserConstructionScript");

	ARAG_IceWyvern_AI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RAG_IceWyvern_AI.RAG_IceWyvern_AI_C.ExecuteUbergraph_RAG_IceWyvern_AI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARAG_IceWyvern_AI_C::ExecuteUbergraph_RAG_IceWyvern_AI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RAG_IceWyvern_AI.RAG_IceWyvern_AI_C.ExecuteUbergraph_RAG_IceWyvern_AI");

	ARAG_IceWyvern_AI_C_ExecuteUbergraph_RAG_IceWyvern_AI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
