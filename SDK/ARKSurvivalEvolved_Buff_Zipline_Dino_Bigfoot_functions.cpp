// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Zipline_Dino_Bigfoot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Zipline_Dino_Bigfoot.Buff_Zipline_Dino_Bigfoot_C.UserConstructionScript
// ()

void ABuff_Zipline_Dino_Bigfoot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Dino_Bigfoot.Buff_Zipline_Dino_Bigfoot_C.UserConstructionScript");

	ABuff_Zipline_Dino_Bigfoot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Dino_Bigfoot.Buff_Zipline_Dino_Bigfoot_C.ExecuteUbergraph_Buff_Zipline_Dino_Bigfoot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Dino_Bigfoot_C::ExecuteUbergraph_Buff_Zipline_Dino_Bigfoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Dino_Bigfoot.Buff_Zipline_Dino_Bigfoot_C.ExecuteUbergraph_Buff_Zipline_Dino_Bigfoot");

	ABuff_Zipline_Dino_Bigfoot_C_ExecuteUbergraph_Buff_Zipline_Dino_Bigfoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
