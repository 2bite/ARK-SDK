// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponElectronicBinoculars_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponElectronicBinoculars.PrimalItem_WeaponElectronicBinoculars_C.ExecuteUbergraph_PrimalItem_WeaponElectronicBinoculars
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponElectronicBinoculars_C::ExecuteUbergraph_PrimalItem_WeaponElectronicBinoculars(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponElectronicBinoculars.PrimalItem_WeaponElectronicBinoculars_C.ExecuteUbergraph_PrimalItem_WeaponElectronicBinoculars");

	UPrimalItem_WeaponElectronicBinoculars_C_ExecuteUbergraph_PrimalItem_WeaponElectronicBinoculars_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
