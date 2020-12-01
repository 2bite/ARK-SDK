// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_IceJumper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_IceJumper.DinoEntry_IceJumper_C.ExecuteUbergraph_DinoEntry_IceJumper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_IceJumper_C::ExecuteUbergraph_DinoEntry_IceJumper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_IceJumper.DinoEntry_IceJumper_C.ExecuteUbergraph_DinoEntry_IceJumper");

	UDinoEntry_IceJumper_C_ExecuteUbergraph_DinoEntry_IceJumper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
