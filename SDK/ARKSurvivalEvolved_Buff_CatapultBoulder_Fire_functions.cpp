// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CatapultBoulder_Fire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_CatapultBoulder_Fire.Buff_CatapultBoulder_Fire_C.ReceiveDestroyed
// ()

void ABuff_CatapultBoulder_Fire_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CatapultBoulder_Fire.Buff_CatapultBoulder_Fire_C.ReceiveDestroyed");

	ABuff_CatapultBoulder_Fire_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CatapultBoulder_Fire.Buff_CatapultBoulder_Fire_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CatapultBoulder_Fire_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CatapultBoulder_Fire.Buff_CatapultBoulder_Fire_C.BPDeactivated");

	ABuff_CatapultBoulder_Fire_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CatapultBoulder_Fire.Buff_CatapultBoulder_Fire_C.UserConstructionScript
// ()

void ABuff_CatapultBoulder_Fire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CatapultBoulder_Fire.Buff_CatapultBoulder_Fire_C.UserConstructionScript");

	ABuff_CatapultBoulder_Fire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CatapultBoulder_Fire.Buff_CatapultBoulder_Fire_C.ReceiveBeginPlay
// ()

void ABuff_CatapultBoulder_Fire_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CatapultBoulder_Fire.Buff_CatapultBoulder_Fire_C.ReceiveBeginPlay");

	ABuff_CatapultBoulder_Fire_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_CatapultBoulder_Fire.Buff_CatapultBoulder_Fire_C.ExecuteUbergraph_Buff_CatapultBoulder_Fire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_CatapultBoulder_Fire_C::ExecuteUbergraph_Buff_CatapultBoulder_Fire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_CatapultBoulder_Fire.Buff_CatapultBoulder_Fire_C.ExecuteUbergraph_Buff_CatapultBoulder_Fire");

	ABuff_CatapultBoulder_Fire_C_ExecuteUbergraph_Buff_CatapultBoulder_Fire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
