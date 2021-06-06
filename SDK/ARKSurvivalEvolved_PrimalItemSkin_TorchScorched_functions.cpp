// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TorchScorched_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_TorchScorched.PrimalItemSkin_TorchScorched_C.BPGetFuelAudioOverride
// ()
// Parameters:
// class APrimalStructure**       ForStructure                   (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundBase* UPrimalItemSkin_TorchScorched_C::BPGetFuelAudioOverride(class APrimalStructure** ForStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TorchScorched.PrimalItemSkin_TorchScorched_C.BPGetFuelAudioOverride");

	UPrimalItemSkin_TorchScorched_C_BPGetFuelAudioOverride_Params params;
	params.ForStructure = ForStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemSkin_TorchScorched.PrimalItemSkin_TorchScorched_C.BPGetFuelParticleSystemOverride
// ()
// Parameters:
// class APrimalStructure**       ForStructure                   (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystem* UPrimalItemSkin_TorchScorched_C::BPGetFuelParticleSystemOverride(class APrimalStructure** ForStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TorchScorched.PrimalItemSkin_TorchScorched_C.BPGetFuelParticleSystemOverride");

	UPrimalItemSkin_TorchScorched_C_BPGetFuelParticleSystemOverride_Params params;
	params.ForStructure = ForStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemSkin_TorchScorched.PrimalItemSkin_TorchScorched_C.ExecuteUbergraph_PrimalItemSkin_TorchScorched
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TorchScorched_C::ExecuteUbergraph_PrimalItemSkin_TorchScorched(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TorchScorched.PrimalItemSkin_TorchScorched_C.ExecuteUbergraph_PrimalItemSkin_TorchScorched");

	UPrimalItemSkin_TorchScorched_C_ExecuteUbergraph_PrimalItemSkin_TorchScorched_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
