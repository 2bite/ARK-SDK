// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Rag_FragTailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Rag_FragTailEmitter.Rag_FragTailEmitter_C.UserConstructionScript
// ()

void ARag_FragTailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rag_FragTailEmitter.Rag_FragTailEmitter_C.UserConstructionScript");

	ARag_FragTailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rag_FragTailEmitter.Rag_FragTailEmitter_C.ExecuteUbergraph_Rag_FragTailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARag_FragTailEmitter_C::ExecuteUbergraph_Rag_FragTailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rag_FragTailEmitter.Rag_FragTailEmitter_C.ExecuteUbergraph_Rag_FragTailEmitter");

	ARag_FragTailEmitter_C_ExecuteUbergraph_Rag_FragTailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
