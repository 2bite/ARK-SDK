// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sign_Small_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sign_Small_Base.Sign_Small_Base_C.UserConstructionScript
// ()

void ASign_Small_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_Small_Base.Sign_Small_Base_C.UserConstructionScript");

	ASign_Small_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sign_Small_Base.Sign_Small_Base_C.ExecuteUbergraph_Sign_Small_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASign_Small_Base_C::ExecuteUbergraph_Sign_Small_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_Small_Base.Sign_Small_Base_C.ExecuteUbergraph_Sign_Small_Base");

	ASign_Small_Base_C_ExecuteUbergraph_Sign_Small_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
