// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Rag_Volcano_Explosion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Rag_Volcano_Explosion.Rag_Volcano_Explosion_C.UserConstructionScript
// ()

void ARag_Volcano_Explosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rag_Volcano_Explosion.Rag_Volcano_Explosion_C.UserConstructionScript");

	ARag_Volcano_Explosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rag_Volcano_Explosion.Rag_Volcano_Explosion_C.ExecuteUbergraph_Rag_Volcano_Explosion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARag_Volcano_Explosion_C::ExecuteUbergraph_Rag_Volcano_Explosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rag_Volcano_Explosion.Rag_Volcano_Explosion_C.ExecuteUbergraph_Rag_Volcano_Explosion");

	ARag_Volcano_Explosion_C_ExecuteUbergraph_Rag_Volcano_Explosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
