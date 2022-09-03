// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElectronicBinocularsWeaponAnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElectronicBinocularsWeaponAnimBP.ElectronicBinocularsWeaponAnimBP_C.ExecuteUbergraph_ElectronicBinocularsWeaponAnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UElectronicBinocularsWeaponAnimBP_C::ExecuteUbergraph_ElectronicBinocularsWeaponAnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectronicBinocularsWeaponAnimBP.ElectronicBinocularsWeaponAnimBP_C.ExecuteUbergraph_ElectronicBinocularsWeaponAnimBP");

	UElectronicBinocularsWeaponAnimBP_C_ExecuteUbergraph_ElectronicBinocularsWeaponAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
