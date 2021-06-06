// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_SpineyTailNeedles_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.GetGravityBias
// ()
// Parameters:
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z_Bias                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_SpineyTailNeedles_C::GetGravityBias(const struct FVector& Velocity, const struct FVector& StartLocation, const struct FVector& TargetLocation, float* Z_Bias)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.GetGravityBias");

	UDinoAttackState_SpineyTailNeedles_C_GetGravityBias_Params params;
	params.Velocity = Velocity;
	params.StartLocation = StartLocation;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Z_Bias != nullptr)
		*Z_Bias = params.Z_Bias;
}


// Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.Get Socket Location
// ()
// Parameters:
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_SpineyTailNeedles_C::Get_Socket_Location(const struct FName& SocketName, float Offset, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.Get Socket Location");

	UDinoAttackState_SpineyTailNeedles_C_Get_Socket_Location_Params params;
	params.SocketName = SocketName;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.OffsetVectorRandomly
// ()
// Parameters:
// struct FVector                 VectorIn                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 newVector                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_SpineyTailNeedles_C::OffsetVectorRandomly(const struct FVector& VectorIn, struct FVector* newVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.OffsetVectorRandomly");

	UDinoAttackState_SpineyTailNeedles_C_OffsetVectorRandomly_Params params;
	params.VectorIn = VectorIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newVector != nullptr)
		*newVector = params.newVector;
}


// Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.ExecuteUbergraph_DinoAttackState_SpineyTailNeedles
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_SpineyTailNeedles_C::ExecuteUbergraph_DinoAttackState_SpineyTailNeedles(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_SpineyTailNeedles.DinoAttackState_SpineyTailNeedles_C.ExecuteUbergraph_DinoAttackState_SpineyTailNeedles");

	UDinoAttackState_SpineyTailNeedles_C_ExecuteUbergraph_DinoAttackState_SpineyTailNeedles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
