// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sign_Wall_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sign_Wall_Metal.Sign_Wall_Metal_C.UserConstructionScript
// ()

void ASign_Wall_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_Wall_Metal.Sign_Wall_Metal_C.UserConstructionScript");

	ASign_Wall_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sign_Wall_Metal.Sign_Wall_Metal_C.ExecuteUbergraph_Sign_Wall_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASign_Wall_Metal_C::ExecuteUbergraph_Sign_Wall_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_Wall_Metal.Sign_Wall_Metal_C.ExecuteUbergraph_Sign_Wall_Metal");

	ASign_Wall_Metal_C_ExecuteUbergraph_Sign_Wall_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
