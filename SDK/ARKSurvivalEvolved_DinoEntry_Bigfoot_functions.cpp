// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Bigfoot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Bigfoot.DinoEntry_Bigfoot_C.ExecuteUbergraph_DinoEntry_Bigfoot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Bigfoot_C::ExecuteUbergraph_DinoEntry_Bigfoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Bigfoot.DinoEntry_Bigfoot_C.ExecuteUbergraph_DinoEntry_Bigfoot");

	UDinoEntry_Bigfoot_C_ExecuteUbergraph_DinoEntry_Bigfoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
