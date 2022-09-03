// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoPackLeader_Dinopithecus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C.ReceiveDestroyed
// ()

void ABuff_DinoPackLeader_Dinopithecus_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C.ReceiveDestroyed");

	ABuff_DinoPackLeader_Dinopithecus_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoPackLeader_Dinopithecus_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C.BPSetupForInstigator");

	ABuff_DinoPackLeader_Dinopithecus_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C.UserConstructionScript
// ()

void ABuff_DinoPackLeader_Dinopithecus_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C.UserConstructionScript");

	ABuff_DinoPackLeader_Dinopithecus_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C.ExecuteUbergraph_Buff_DinoPackLeader_Dinopithecus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoPackLeader_Dinopithecus_C::ExecuteUbergraph_Buff_DinoPackLeader_Dinopithecus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoPackLeader_Dinopithecus.Buff_DinoPackLeader_Dinopithecus_C.ExecuteUbergraph_Buff_DinoPackLeader_Dinopithecus");

	ABuff_DinoPackLeader_Dinopithecus_C_ExecuteUbergraph_Buff_DinoPackLeader_Dinopithecus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
