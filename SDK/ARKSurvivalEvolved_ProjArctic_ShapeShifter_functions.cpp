// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArctic_ShapeShifter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.BPInitializedVelocity
// ()
// Parameters:
// struct FVector                 InVelocity                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         CustomSpeed                    (Parm, ZeroConstructor, IsPlainOldData)

void AProjArctic_ShapeShifter_C::BPInitializedVelocity(float* CustomSpeed, struct FVector* InVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.BPInitializedVelocity");

	AProjArctic_ShapeShifter_C_BPInitializedVelocity_Params params;
	params.CustomSpeed = CustomSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InVelocity != nullptr)
		*InVelocity = params.InVelocity;
}


// Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.ReceiveBeginPlay
// ()

void AProjArctic_ShapeShifter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.ReceiveBeginPlay");

	AProjArctic_ShapeShifter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.UserConstructionScript
// ()

void AProjArctic_ShapeShifter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.UserConstructionScript");

	AProjArctic_ShapeShifter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.ExecuteUbergraph_ProjArctic_ShapeShifter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArctic_ShapeShifter_C::ExecuteUbergraph_ProjArctic_ShapeShifter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArctic_ShapeShifter.ProjArctic_ShapeShifter_C.ExecuteUbergraph_ProjArctic_ShapeShifter");

	AProjArctic_ShapeShifter_C_ExecuteUbergraph_ProjArctic_ShapeShifter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
