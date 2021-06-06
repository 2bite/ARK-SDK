// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TorchSparkler_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemSkin_TorchSparkler.PrimalItemSkin_TorchSparkler_C.BPGetFuelAudioOverride
// ()
// Parameters:
// class APrimalStructure**       ForStructure                   (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundBase* UPrimalItemSkin_TorchSparkler_C::BPGetFuelAudioOverride(class APrimalStructure** ForStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TorchSparkler.PrimalItemSkin_TorchSparkler_C.BPGetFuelAudioOverride");

	UPrimalItemSkin_TorchSparkler_C_BPGetFuelAudioOverride_Params params;
	params.ForStructure = ForStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemSkin_TorchSparkler.PrimalItemSkin_TorchSparkler_C.BPGetFuelParticleSystemOverride
// ()
// Parameters:
// class APrimalStructure**       ForStructure                   (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystem* UPrimalItemSkin_TorchSparkler_C::BPGetFuelParticleSystemOverride(class APrimalStructure** ForStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TorchSparkler.PrimalItemSkin_TorchSparkler_C.BPGetFuelParticleSystemOverride");

	UPrimalItemSkin_TorchSparkler_C_BPGetFuelParticleSystemOverride_Params params;
	params.ForStructure = ForStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PrimalItemSkin_TorchSparkler.PrimalItemSkin_TorchSparkler_C.ExecuteUbergraph_PrimalItemSkin_TorchSparkler
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemSkin_TorchSparkler_C::ExecuteUbergraph_PrimalItemSkin_TorchSparkler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_TorchSparkler.PrimalItemSkin_TorchSparkler_C.ExecuteUbergraph_PrimalItemSkin_TorchSparkler");

	UPrimalItemSkin_TorchSparkler_C_ExecuteUbergraph_PrimalItemSkin_TorchSparkler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
