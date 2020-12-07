// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_C4Ammo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_C4Ammo.EngramEntry_C4Ammo_C.ExecuteUbergraph_EngramEntry_C4Ammo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_C4Ammo_C::ExecuteUbergraph_EngramEntry_C4Ammo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_C4Ammo.EngramEntry_C4Ammo_C.ExecuteUbergraph_EngramEntry_C4Ammo");

	UEngramEntry_C4Ammo_C_ExecuteUbergraph_EngramEntry_C4Ammo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
