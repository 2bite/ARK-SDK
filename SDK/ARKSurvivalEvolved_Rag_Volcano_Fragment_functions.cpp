// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Rag_Volcano_Fragment_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Rag_Volcano_Fragment.Rag_Volcano_Fragment_C.UserConstructionScript
// ()

void ARag_Volcano_Fragment_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rag_Volcano_Fragment.Rag_Volcano_Fragment_C.UserConstructionScript");

	ARag_Volcano_Fragment_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rag_Volcano_Fragment.Rag_Volcano_Fragment_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ARag_Volcano_Fragment_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rag_Volcano_Fragment.Rag_Volcano_Fragment_C.ReceiveTick");

	ARag_Volcano_Fragment_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rag_Volcano_Fragment.Rag_Volcano_Fragment_C.ExecuteUbergraph_Rag_Volcano_Fragment
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARag_Volcano_Fragment_C::ExecuteUbergraph_Rag_Volcano_Fragment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rag_Volcano_Fragment.Rag_Volcano_Fragment_C.ExecuteUbergraph_Rag_Volcano_Fragment");

	ARag_Volcano_Fragment_C_ExecuteUbergraph_Rag_Volcano_Fragment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
