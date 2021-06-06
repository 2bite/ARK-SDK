// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gen2_AreaBuff_Eden_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gen2_AreaBuff_Eden.Gen2_AreaBuff_Eden_C.UserConstructionScript
// ()

void AGen2_AreaBuff_Eden_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Eden.Gen2_AreaBuff_Eden_C.UserConstructionScript");

	AGen2_AreaBuff_Eden_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen2_AreaBuff_Eden.Gen2_AreaBuff_Eden_C.ExecuteUbergraph_Gen2_AreaBuff_Eden
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGen2_AreaBuff_Eden_C::ExecuteUbergraph_Gen2_AreaBuff_Eden(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen2_AreaBuff_Eden.Gen2_AreaBuff_Eden_C.ExecuteUbergraph_Gen2_AreaBuff_Eden");

	AGen2_AreaBuff_Eden_C_ExecuteUbergraph_Gen2_AreaBuff_Eden_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
