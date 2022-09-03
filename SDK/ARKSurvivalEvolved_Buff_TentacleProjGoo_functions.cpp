// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TentacleProjGoo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TentacleProjGoo.Buff_TentacleProjGoo_C.BPPreventTekArmorBuffs
// ()
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> ABuff_TentacleProjGoo_C::BPPreventTekArmorBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TentacleProjGoo.Buff_TentacleProjGoo_C.BPPreventTekArmorBuffs");

	ABuff_TentacleProjGoo_C_BPPreventTekArmorBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TentacleProjGoo.Buff_TentacleProjGoo_C.BPPreventflight
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TentacleProjGoo_C::BPPreventflight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TentacleProjGoo.Buff_TentacleProjGoo_C.BPPreventflight");

	ABuff_TentacleProjGoo_C_BPPreventflight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TentacleProjGoo.Buff_TentacleProjGoo_C.UserConstructionScript
// ()

void ABuff_TentacleProjGoo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TentacleProjGoo.Buff_TentacleProjGoo_C.UserConstructionScript");

	ABuff_TentacleProjGoo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TentacleProjGoo.Buff_TentacleProjGoo_C.ReceiveBeginPlay
// ()

void ABuff_TentacleProjGoo_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TentacleProjGoo.Buff_TentacleProjGoo_C.ReceiveBeginPlay");

	ABuff_TentacleProjGoo_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TentacleProjGoo.Buff_TentacleProjGoo_C.ExecuteUbergraph_Buff_TentacleProjGoo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TentacleProjGoo_C::ExecuteUbergraph_Buff_TentacleProjGoo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TentacleProjGoo.Buff_TentacleProjGoo_C.ExecuteUbergraph_Buff_TentacleProjGoo");

	ABuff_TentacleProjGoo_C_ExecuteUbergraph_Buff_TentacleProjGoo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
