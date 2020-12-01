// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekFabricatorCraftedEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekFabricatorCraftedEmitter.TekFabricatorCraftedEmitter_C.UserConstructionScript
// ()

void ATekFabricatorCraftedEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekFabricatorCraftedEmitter.TekFabricatorCraftedEmitter_C.UserConstructionScript");

	ATekFabricatorCraftedEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekFabricatorCraftedEmitter.TekFabricatorCraftedEmitter_C.ExecuteUbergraph_TekFabricatorCraftedEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekFabricatorCraftedEmitter_C::ExecuteUbergraph_TekFabricatorCraftedEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekFabricatorCraftedEmitter.TekFabricatorCraftedEmitter_C.ExecuteUbergraph_TekFabricatorCraftedEmitter");

	ATekFabricatorCraftedEmitter_C_ExecuteUbergraph_TekFabricatorCraftedEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
