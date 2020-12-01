// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalWorldModifier_WinterSeason_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalWorldModifier_WinterSeason.PrimalWorldModifier_WinterSeason_C.UserConstructionScript
// ()

void APrimalWorldModifier_WinterSeason_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalWorldModifier_WinterSeason.PrimalWorldModifier_WinterSeason_C.UserConstructionScript");

	APrimalWorldModifier_WinterSeason_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalWorldModifier_WinterSeason.PrimalWorldModifier_WinterSeason_C.ExecuteUbergraph_PrimalWorldModifier_WinterSeason
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APrimalWorldModifier_WinterSeason_C::ExecuteUbergraph_PrimalWorldModifier_WinterSeason(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalWorldModifier_WinterSeason.PrimalWorldModifier_WinterSeason_C.ExecuteUbergraph_PrimalWorldModifier_WinterSeason");

	APrimalWorldModifier_WinterSeason_C_ExecuteUbergraph_PrimalWorldModifier_WinterSeason_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
