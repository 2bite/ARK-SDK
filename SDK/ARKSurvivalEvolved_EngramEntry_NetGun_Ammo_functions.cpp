// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_NetGun_Ammo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_NetGun_Ammo.EngramEntry_NetGun_Ammo_C.ExecuteUbergraph_EngramEntry_NetGun_Ammo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_NetGun_Ammo_C::ExecuteUbergraph_EngramEntry_NetGun_Ammo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_NetGun_Ammo.EngramEntry_NetGun_Ammo_C.ExecuteUbergraph_EngramEntry_NetGun_Ammo");

	UEngramEntry_NetGun_Ammo_C_ExecuteUbergraph_EngramEntry_NetGun_Ammo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
