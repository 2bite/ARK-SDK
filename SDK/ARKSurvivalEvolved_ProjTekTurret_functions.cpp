// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTekTurret_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjTekTurret.ProjTekTurret_C.UserConstructionScript
// ()

void AProjTekTurret_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekTurret.ProjTekTurret_C.UserConstructionScript");

	AProjTekTurret_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjTekTurret.ProjTekTurret_C.ExecuteUbergraph_ProjTekTurret
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjTekTurret_C::ExecuteUbergraph_ProjTekTurret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekTurret.ProjTekTurret_C.ExecuteUbergraph_ProjTekTurret");

	AProjTekTurret_C_ExecuteUbergraph_ProjTekTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
