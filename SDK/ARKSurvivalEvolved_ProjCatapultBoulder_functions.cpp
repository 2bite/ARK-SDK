// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjCatapultBoulder_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjCatapultBoulder.ProjCatapultBoulder_C.UserConstructionScript
// ()

void AProjCatapultBoulder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCatapultBoulder.ProjCatapultBoulder_C.UserConstructionScript");

	AProjCatapultBoulder_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjCatapultBoulder.ProjCatapultBoulder_C.ExecuteUbergraph_ProjCatapultBoulder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjCatapultBoulder_C::ExecuteUbergraph_ProjCatapultBoulder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCatapultBoulder.ProjCatapultBoulder_C.ExecuteUbergraph_ProjCatapultBoulder");

	AProjCatapultBoulder_C_ExecuteUbergraph_ProjCatapultBoulder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
