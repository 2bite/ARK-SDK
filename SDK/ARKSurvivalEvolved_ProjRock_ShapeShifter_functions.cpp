// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjRock_ShapeShifter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjRock_ShapeShifter.ProjRock_ShapeShifter_C.BPInitializedVelocity
// ()
// Parameters:
// struct FVector                 InVelocity                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         CustomSpeed                    (Parm, ZeroConstructor, IsPlainOldData)

void AProjRock_ShapeShifter_C::BPInitializedVelocity(float* CustomSpeed, struct FVector* InVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRock_ShapeShifter.ProjRock_ShapeShifter_C.BPInitializedVelocity");

	AProjRock_ShapeShifter_C_BPInitializedVelocity_Params params;
	params.CustomSpeed = CustomSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InVelocity != nullptr)
		*InVelocity = params.InVelocity;
}


// Function ProjRock_ShapeShifter.ProjRock_ShapeShifter_C.ReceiveBeginPlay
// ()

void AProjRock_ShapeShifter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRock_ShapeShifter.ProjRock_ShapeShifter_C.ReceiveBeginPlay");

	AProjRock_ShapeShifter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRock_ShapeShifter.ProjRock_ShapeShifter_C.UserConstructionScript
// ()

void AProjRock_ShapeShifter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRock_ShapeShifter.ProjRock_ShapeShifter_C.UserConstructionScript");

	AProjRock_ShapeShifter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRock_ShapeShifter.ProjRock_ShapeShifter_C.ExecuteUbergraph_ProjRock_ShapeShifter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjRock_ShapeShifter_C::ExecuteUbergraph_ProjRock_ShapeShifter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRock_ShapeShifter.ProjRock_ShapeShifter_C.ExecuteUbergraph_ProjRock_ShapeShifter");

	AProjRock_ShapeShifter_C_ExecuteUbergraph_ProjRock_ShapeShifter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
