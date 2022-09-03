// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_SanguineElixir_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.CheckValidForUse
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_SanguineElixir_C::CheckValidForUse(class APrimalDinoCharacter* Dino, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.CheckValidForUse");

	UPrimalItem_SanguineElixir_C_CheckValidForUse_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.BPCanUse
// (NetRequest, Exec, Native, NetMulticast, Public, Delegate, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool*                          bIgnoreCooldown                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPrimalItem_SanguineElixir_C::BPCanUse(bool* bIgnoreCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.BPCanUse");

	UPrimalItem_SanguineElixir_C_BPCanUse_Params params;
	params.bIgnoreCooldown = bIgnoreCooldown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.BlueprintUsed
// ()

void UPrimalItem_SanguineElixir_C::BlueprintUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.BlueprintUsed");

	UPrimalItem_SanguineElixir_C_BlueprintUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.ExecuteUbergraph_PrimalItem_SanguineElixir
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_SanguineElixir_C::ExecuteUbergraph_PrimalItem_SanguineElixir(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_SanguineElixir.PrimalItem_SanguineElixir_C.ExecuteUbergraph_PrimalItem_SanguineElixir");

	UPrimalItem_SanguineElixir_C_ExecuteUbergraph_PrimalItem_SanguineElixir_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
