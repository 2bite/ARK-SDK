// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sign_WarMap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sign_WarMap.Sign_WarMap_C.UserConstructionScript
// ()

void ASign_WarMap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_WarMap.Sign_WarMap_C.UserConstructionScript");

	ASign_WarMap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sign_WarMap.Sign_WarMap_C.ReceiveBeginPlay
// ()

void ASign_WarMap_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_WarMap.Sign_WarMap_C.ReceiveBeginPlay");

	ASign_WarMap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sign_WarMap.Sign_WarMap_C.SetupMat
// ()

void ASign_WarMap_C::SetupMat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_WarMap.Sign_WarMap_C.SetupMat");

	ASign_WarMap_C_SetupMat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sign_WarMap.Sign_WarMap_C.ExecuteUbergraph_Sign_WarMap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASign_WarMap_C::ExecuteUbergraph_Sign_WarMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_WarMap.Sign_WarMap_C.ExecuteUbergraph_Sign_WarMap");

	ASign_WarMap_C_ExecuteUbergraph_Sign_WarMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
