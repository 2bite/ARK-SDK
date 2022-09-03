#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventFreezing_Fenrir_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PreventFreezing_Fenrir.Buff_PreventFreezing_Fenrir_C
// 0x005B (0x09D3 - 0x0978)
class ABuff_PreventFreezing_Fenrir_C : public ABuff_PreventFreezing_C
{
public:
	struct FBPNetExecParams                            K2Node_MakeStruct_BPNetExecParams;                        // 0x0978(0x0040) (Transient, DuplicateTransient)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x09B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x09B9(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x09C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x09C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09C9(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTime;                                   // 0x09CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPServerHandleNetExecCommand_ReturnValue;        // 0x09D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x09D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x09D2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PreventFreezing_Fenrir.Buff_PreventFreezing_Fenrir_C");
		return ptr;
	}


	void UserConstructionScript();
	void BuffTickServer(float* DeltaTime);
	void ExecuteUbergraph_Buff_PreventFreezing_Fenrir(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
