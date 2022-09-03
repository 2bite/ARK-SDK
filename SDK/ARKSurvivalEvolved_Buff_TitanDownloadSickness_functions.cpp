// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TitanDownloadSickness_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TitanDownloadSickness.Buff_TitanDownloadSickness_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TitanDownloadSickness_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TitanDownloadSickness.Buff_TitanDownloadSickness_C.BPActivated");

	ABuff_TitanDownloadSickness_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TitanDownloadSickness.Buff_TitanDownloadSickness_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TitanDownloadSickness_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TitanDownloadSickness.Buff_TitanDownloadSickness_C.BPDeactivated");

	ABuff_TitanDownloadSickness_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TitanDownloadSickness.Buff_TitanDownloadSickness_C.UserConstructionScript
// ()

void ABuff_TitanDownloadSickness_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TitanDownloadSickness.Buff_TitanDownloadSickness_C.UserConstructionScript");

	ABuff_TitanDownloadSickness_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TitanDownloadSickness.Buff_TitanDownloadSickness_C.ExecuteUbergraph_Buff_TitanDownloadSickness
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TitanDownloadSickness_C::ExecuteUbergraph_Buff_TitanDownloadSickness(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TitanDownloadSickness.Buff_TitanDownloadSickness_C.ExecuteUbergraph_Buff_TitanDownloadSickness");

	ABuff_TitanDownloadSickness_C_ExecuteUbergraph_Buff_TitanDownloadSickness_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
