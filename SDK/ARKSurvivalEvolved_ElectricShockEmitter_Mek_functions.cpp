// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElectricShockEmitter_Mek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElectricShockEmitter_Mek.ElectricShockEmitter_Mek_C.UserConstructionScript
// ()

void AElectricShockEmitter_Mek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectricShockEmitter_Mek.ElectricShockEmitter_Mek_C.UserConstructionScript");

	AElectricShockEmitter_Mek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElectricShockEmitter_Mek.ElectricShockEmitter_Mek_C.ExecuteUbergraph_ElectricShockEmitter_Mek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElectricShockEmitter_Mek_C::ExecuteUbergraph_ElectricShockEmitter_Mek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElectricShockEmitter_Mek.ElectricShockEmitter_Mek_C.ExecuteUbergraph_ElectricShockEmitter_Mek");

	AElectricShockEmitter_Mek_C_ExecuteUbergraph_ElectricShockEmitter_Mek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
