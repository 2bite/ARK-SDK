// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_HeavyTurret_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_HeavyTurret.EngramEntry_HeavyTurret_C.ExecuteUbergraph_EngramEntry_HeavyTurret
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_HeavyTurret_C::ExecuteUbergraph_EngramEntry_HeavyTurret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_HeavyTurret.EngramEntry_HeavyTurret_C.ExecuteUbergraph_EngramEntry_HeavyTurret");

	UEngramEntry_HeavyTurret_C_ExecuteUbergraph_EngramEntry_HeavyTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
