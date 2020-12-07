// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_CatapultTurret_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_CatapultTurret.EngramEntry_CatapultTurret_C.ExecuteUbergraph_EngramEntry_CatapultTurret
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_CatapultTurret_C::ExecuteUbergraph_EngramEntry_CatapultTurret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_CatapultTurret.EngramEntry_CatapultTurret_C.ExecuteUbergraph_EngramEntry_CatapultTurret");

	UEngramEntry_CatapultTurret_C_ExecuteUbergraph_EngramEntry_CatapultTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
