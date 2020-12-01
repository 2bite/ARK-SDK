// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SpinoAqua_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_SpinoAqua.Buff_SpinoAqua_C.ActivateAquaBuff
// ()

void ABuff_SpinoAqua_C::ActivateAquaBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpinoAqua.Buff_SpinoAqua_C.ActivateAquaBuff");

	ABuff_SpinoAqua_C_ActivateAquaBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpinoAqua.Buff_SpinoAqua_C.DeactivateAquaBuff
// ()

void ABuff_SpinoAqua_C::DeactivateAquaBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpinoAqua.Buff_SpinoAqua_C.DeactivateAquaBuff");

	ABuff_SpinoAqua_C_DeactivateAquaBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpinoAqua.Buff_SpinoAqua_C.UserConstructionScript
// ()

void ABuff_SpinoAqua_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpinoAqua.Buff_SpinoAqua_C.UserConstructionScript");

	ABuff_SpinoAqua_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpinoAqua.Buff_SpinoAqua_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpinoAqua_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpinoAqua.Buff_SpinoAqua_C.BPDeactivated");

	ABuff_SpinoAqua_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpinoAqua.Buff_SpinoAqua_C.ReceiveBeginPlay
// ()

void ABuff_SpinoAqua_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpinoAqua.Buff_SpinoAqua_C.ReceiveBeginPlay");

	ABuff_SpinoAqua_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpinoAqua.Buff_SpinoAqua_C.ExecuteUbergraph_Buff_SpinoAqua
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpinoAqua_C::ExecuteUbergraph_Buff_SpinoAqua(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpinoAqua.Buff_SpinoAqua_C.ExecuteUbergraph_Buff_SpinoAqua");

	ABuff_SpinoAqua_C_ExecuteUbergraph_Buff_SpinoAqua_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
