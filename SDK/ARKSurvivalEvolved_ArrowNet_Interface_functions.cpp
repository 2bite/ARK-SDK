// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArrowNet_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArrowNet_Interface.ArrowNet_Interface_C.Remote Set Crosshair Size
// ()
// Parameters:
// float                          InSize                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutSize                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UArrowNet_Interface_C::Remote_Set_Crosshair_Size(float InSize, float* OutSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArrowNet_Interface.ArrowNet_Interface_C.Remote Set Crosshair Size");

	UArrowNet_Interface_C_Remote_Set_Crosshair_Size_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSize != nullptr)
		*OutSize = params.OutSize;
}


// Function ArrowNet_Interface.ArrowNet_Interface_C.Remote Set Crosshair Color
// ()
// Parameters:
// struct FLinearColor            InColor                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            outColor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UArrowNet_Interface_C::Remote_Set_Crosshair_Color(const struct FLinearColor& InColor, struct FLinearColor* outColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArrowNet_Interface.ArrowNet_Interface_C.Remote Set Crosshair Color");

	UArrowNet_Interface_C_Remote_Set_Crosshair_Color_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outColor != nullptr)
		*outColor = params.outColor;
}


// Function ArrowNet_Interface.ArrowNet_Interface_C.GetHudData
// ()
// Parameters:
// class UClass*                  ProjectileClass                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SocketLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 FireDirection                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AimedTargetCheckRadius         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsFPV                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UArrowNet_Interface_C::GetHudData(class UClass** ProjectileClass, struct FVector* SocketLocation, struct FVector* FireDirection, float* AimedTargetCheckRadius, bool* IsFPV)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArrowNet_Interface.ArrowNet_Interface_C.GetHudData");

	UArrowNet_Interface_C_GetHudData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProjectileClass != nullptr)
		*ProjectileClass = params.ProjectileClass;
	if (SocketLocation != nullptr)
		*SocketLocation = params.SocketLocation;
	if (FireDirection != nullptr)
		*FireDirection = params.FireDirection;
	if (AimedTargetCheckRadius != nullptr)
		*AimedTargetCheckRadius = params.AimedTargetCheckRadius;
	if (IsFPV != nullptr)
		*IsFPV = params.IsFPV;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
