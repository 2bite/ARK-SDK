// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Turret_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Turret.EngramEntry_Turret_C.ExecuteUbergraph_EngramEntry_Turret
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Turret_C::ExecuteUbergraph_EngramEntry_Turret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Turret.EngramEntry_Turret_C.ExecuteUbergraph_EngramEntry_Turret");

	UEngramEntry_Turret_C_ExecuteUbergraph_EngramEntry_Turret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
