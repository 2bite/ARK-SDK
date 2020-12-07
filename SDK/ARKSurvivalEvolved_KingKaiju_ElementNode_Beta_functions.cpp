// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KingKaiju_ElementNode_Beta_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KingKaiju_ElementNode_Beta.KingKaiju_ElementNode_Beta_C.UserConstructionScript
// ()

void AKingKaiju_ElementNode_Beta_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode_Beta.KingKaiju_ElementNode_Beta_C.UserConstructionScript");

	AKingKaiju_ElementNode_Beta_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KingKaiju_ElementNode_Beta.KingKaiju_ElementNode_Beta_C.ExecuteUbergraph_KingKaiju_ElementNode_Beta
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AKingKaiju_ElementNode_Beta_C::ExecuteUbergraph_KingKaiju_ElementNode_Beta(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KingKaiju_ElementNode_Beta.KingKaiju_ElementNode_Beta_C.ExecuteUbergraph_KingKaiju_ElementNode_Beta");

	AKingKaiju_ElementNode_Beta_C_ExecuteUbergraph_KingKaiju_ElementNode_Beta_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
